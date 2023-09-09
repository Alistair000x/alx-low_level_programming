#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>

#define BUFSIZE 128

void print_error(const char *msg) {
    fprintf(stderr, "%s\n", msg);
    exit(98);
}

void print_elf_header(const Elf64_Ehdr *ehdr) 
{
	int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", ehdr->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             ");
    if (ehdr->e_ident[EI_CLASS] == ELFCLASS32) {
        printf("ELF32\n");
    } else if (ehdr->e_ident[EI_CLASS] == ELFCLASS64) {
        printf("ELF64\n");
    } else {
        print_error("Invalid ELF class");
    }
    printf("  Data:                              ");
    if (ehdr->e_ident[EI_DATA] == ELFDATA2LSB) {
        printf("2's complement, little endian\n");
    } else if (ehdr->e_ident[EI_DATA] == ELFDATA2MSB) {
        printf("2's complement, big endian\n");
    } else {
        print_error("Invalid data encoding");
    }
    printf("  Version:                           %d (current)\n", ehdr->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (ehdr->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        case ELFOSABI_LINUX:
            printf("UNIX - Linux\n");
            break;
        default:
            printf("<unknown: %u>\n", ehdr->e_ident[EI_OSABI]);
            break;
    }
    printf("  ABI Version:                       %d\n", ehdr->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (ehdr->e_type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %u>\n", ehdr->e_type);
            break;
    }
    printf("  Entry point address:               0x%lx\n", ehdr->e_entry);
}

int main(int argc, char *argv[]) {
    Elf64_Ehdr ehdr;
	int fd;
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error: Can't open file");
    }

    Elf64_Ehdr ehdr;
    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        print_error("Error: Can't read file");
    }

    print_elf_header(&ehdr);

    close(fd);
    return 0;
}

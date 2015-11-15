#ifndef JOS_INC_SYSCALL_H
#define JOS_INC_SYSCALL_H

/* system call numbers */
enum {
	SYS_cputs = 0,
	SYS_cgetc,
	SYS_getenvid,
	SYS_env_destroy,
	SYS_map_kernel_page,
	SYS_sbrk,
	NSYSCALLS
};

#endif /* !JOS_INC_SYSCALL_H */

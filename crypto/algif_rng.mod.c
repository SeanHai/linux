#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xb6552e, "sock_no_sendpage" },
	{ 0x6dbdbb54, "sock_no_mmap" },
	{ 0x537b5209, "sock_no_sendmsg" },
	{ 0xadbe88f7, "sock_no_getsockopt" },
	{ 0x61a7378c, "sock_no_setsockopt" },
	{ 0x68399656, "sock_no_shutdown" },
	{ 0xae84bfab, "sock_no_listen" },
	{ 0x92e83972, "sock_no_ioctl" },
	{ 0xe63246ae, "sock_no_getname" },
	{ 0x3bc4869, "sock_no_accept" },
	{ 0xe9444191, "sock_no_socketpair" },
	{ 0xacef23f8, "sock_no_connect" },
	{ 0x9c6c0e2f, "sock_no_bind" },
	{ 0x485d250d, "af_alg_release" },
	{ 0x67fe33d9, "af_alg_unregister_type" },
	{ 0xa5bca27a, "af_alg_register_type" },
	{ 0x8515b334, "crypto_alloc_rng" },
	{ 0xdf6e33f3, "crypto_destroy_tfm" },
	{ 0x5b241659, "crypto_rng_reset" },
	{ 0x817d58b9, "af_alg_release_parent" },
	{ 0xb2099ec9, "sock_kfree_s" },
	{ 0x84891d2b, "sock_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc15a44c6, "memzero_explicit" },
	{ 0x3f33e88c, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "28F815DDFE22DC51D102E41");
MODULE_INFO(rhelversion, "8.0");

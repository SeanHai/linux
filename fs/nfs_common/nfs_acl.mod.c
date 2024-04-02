#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x154b390d, "xdr_decode_word" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x3318f41c, "init_user_ns" },
	{ 0x9c79c08d, "xdr_encode_array2" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x58cb94b7, "make_kgid" },
	{ 0xaf6bc3d0, "posix_acl_init" },
	{ 0x19432892, "xdr_encode_word" },
	{ 0x4043059e, "from_kuid" },
	{ 0x536c30ca, "from_kgid" },
	{ 0x33c84fc9, "posix_acl_alloc" },
	{ 0xe3a53f4c, "sort" },
	{ 0xa4d8c2d3, "make_kuid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
	{ 0x2401d94a, "xdr_decode_array2" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "10E3C9F11C1BFA534F4E771");
MODULE_INFO(rhelversion, "8.0");

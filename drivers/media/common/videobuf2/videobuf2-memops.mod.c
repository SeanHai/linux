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
	{ 0xa1dee5f1, "frame_vector_create" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xff903b43, "frame_vector_destroy" },
	{ 0x655611bf, "get_vaddr_frames" },
	{ 0x568f2f3f, "put_vaddr_frames" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1613C8DCDFB3B9DB33EFA92");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xc8a8e3e2, "textsearch_unregister" },
	{ 0x1f4ffb83, "textsearch_register" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x11089ac7, "_ctype" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "9DEEA0344565B0AF37DA6F3");
MODULE_INFO(rhelversion, "8.0");

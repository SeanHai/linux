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
	{ 0x5b17be06, "cast_s4" },
	{ 0xbd3e7542, "cast_s1" },
	{ 0x5609ce41, "cast_s2" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7ba008ce, "crypto_register_alg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb9cba57f, "cast_s3" },
	{ 0x22faa972, "crypto_unregister_alg" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cast_common";


MODULE_INFO(srcversion, "EEBA26B446C27673A96F48E");
MODULE_INFO(rhelversion, "8.0");

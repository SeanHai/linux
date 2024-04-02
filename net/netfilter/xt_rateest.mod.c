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
	{ 0x6e014603, "xt_unregister_match" },
	{ 0x888fcb33, "xt_register_match" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0x84fac7be, "xt_rateest_lookup" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x6153c17c, "xt_rateest_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xt_RATEEST";


MODULE_INFO(srcversion, "92C2D7326B90268B99BEEA9");
MODULE_INFO(rhelversion, "8.0");

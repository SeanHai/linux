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
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0x1cec7d80, "xt_unregister_matches" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0x2431ba19, "xt_register_matches" },
	{ 0x1b251e26, "ip_set_test" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xb867e0a2, "ip_set_del" },
	{ 0x3fe4ec0c, "ip_set_add" },
	{ 0x27e1a049, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x5a0b9bc4, "ip_set_nfnl_get_byindex" },
	{ 0xf1ff570e, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "2DC0E49EDD2BECE32E49767");
MODULE_INFO(rhelversion, "8.0");

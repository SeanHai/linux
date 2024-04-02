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
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,ads7828");
MODULE_ALIAS("of:N*T*Cti,ads7828C*");
MODULE_ALIAS("of:N*T*Cti,ads7830");
MODULE_ALIAS("of:N*T*Cti,ads7830C*");
MODULE_ALIAS("i2c:ads7828");
MODULE_ALIAS("i2c:ads7830");

MODULE_INFO(srcversion, "B40B61EA8280E9542B96C8A");
MODULE_INFO(rhelversion, "8.0");

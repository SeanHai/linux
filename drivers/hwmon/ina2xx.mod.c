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
	{ 0xf9a482f9, "msleep" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xe6478472, "_dev_info" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x749fffb4, "regmap_write" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x28318305, "snprintf" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");

MODULE_INFO(srcversion, "B150E292072ED004E65AC5F");
MODULE_INFO(rhelversion, "8.0");

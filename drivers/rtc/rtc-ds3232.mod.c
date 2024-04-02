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
	{ 0xc351790f, "driver_unregister" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x65f39767, "__spi_register_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0x64cb4ee3, "spi_setup" },
	{ 0x91461506, "__devm_regmap_init_spi" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xf1f77788, "devm_rtc_device_register" },
	{ 0x70f3afb7, "devm_hwmon_device_register_with_info" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x977e0f83, "rtc_update_irq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "671CC0D839BA9E65C4ED8CC");
MODULE_INFO(rhelversion, "8.0");

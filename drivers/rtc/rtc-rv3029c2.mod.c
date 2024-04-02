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
	{ 0x91461506, "__devm_regmap_init_spi" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xf1f77788, "devm_rtc_device_register" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x91715312, "sprintf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x977e0f83, "rtc_update_irq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029C*");
MODULE_ALIAS("of:N*T*Crv3029");
MODULE_ALIAS("of:N*T*Crv3029C*");
MODULE_ALIAS("of:N*T*Crv3029c2");
MODULE_ALIAS("of:N*T*Crv3029c2C*");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2C*");
MODULE_ALIAS("i2c:rv3029");
MODULE_ALIAS("i2c:rv3029c2");

MODULE_INFO(srcversion, "82B660B94CE5E4F8DCEE6C3");
MODULE_INFO(rhelversion, "8.0");

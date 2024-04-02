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
	{ 0xb98f5e97, "acpi_match_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x59cc5a76, "device_property_present" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0xa2d40b66, "rtc_nvmem_register" },
	{ 0x9e969d69, "devm_clk_register" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x2a1427e2, "__rtc_register_device" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0xac5fb70a, "devm_rtc_allocate_device" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x91715312, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x977e0f83, "rtc_update_irq" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:DS1307:*");
MODULE_ALIAS("acpi*:DS1308:*");
MODULE_ALIAS("acpi*:DS1337:*");
MODULE_ALIAS("acpi*:DS1338:*");
MODULE_ALIAS("acpi*:DS1339:*");
MODULE_ALIAS("acpi*:DS1388:*");
MODULE_ALIAS("acpi*:DS1340:*");
MODULE_ALIAS("acpi*:DS1341:*");
MODULE_ALIAS("acpi*:DS3231:*");
MODULE_ALIAS("acpi*:M41T0:*");
MODULE_ALIAS("acpi*:M41T00:*");
MODULE_ALIAS("acpi*:MCP7940X:*");
MODULE_ALIAS("acpi*:MCP7941X:*");
MODULE_ALIAS("acpi*:PT7C4338:*");
MODULE_ALIAS("acpi*:RX8025:*");
MODULE_ALIAS("acpi*:ISL12057:*");
MODULE_ALIAS("acpi*:RX8130:*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "152AAE16BBA7FA867CF58F6");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1fede25e, "acpi_device_get_match_data" },
	{ 0xe6478472, "_dev_info" },
	{ 0x2eb68522, "devm_nvmem_register" },
	{ 0xb12f3cb9, "pm_runtime_enable" },
	{ 0x5ccde853, "i2c_new_dummy" },
	{ 0x62e2909, "devm_gpiod_get_optional" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4cf09b5c, "device_property_read_u32_array" },
	{ 0x59cc5a76, "device_property_present" },
	{ 0x59c62ce6, "i2c_match_id" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc78c5942, "regmap_bulk_read" },
	{ 0xeddf6d6d, "__pm_runtime_set_status" },
	{ 0x5c7c325f, "__pm_runtime_disable" },
	{ 0x2b26f667, "i2c_unregister_device" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xc6572c74, "__pm_runtime_idle" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x12a38747, "usleep_range" },
	{ 0x64806ce1, "regmap_bulk_write" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5d4da26b, "gpiod_set_value_cansleep" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x8a77fa8c, "__pm_runtime_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT3499:*");
MODULE_ALIAS("of:N*T*Catmel,24c00");
MODULE_ALIAS("of:N*T*Catmel,24c00C*");
MODULE_ALIAS("of:N*T*Catmel,24c01");
MODULE_ALIAS("of:N*T*Catmel,24c01C*");
MODULE_ALIAS("of:N*T*Catmel,24cs01");
MODULE_ALIAS("of:N*T*Catmel,24cs01C*");
MODULE_ALIAS("of:N*T*Catmel,24c02");
MODULE_ALIAS("of:N*T*Catmel,24c02C*");
MODULE_ALIAS("of:N*T*Catmel,24cs02");
MODULE_ALIAS("of:N*T*Catmel,24cs02C*");
MODULE_ALIAS("of:N*T*Catmel,24mac402");
MODULE_ALIAS("of:N*T*Catmel,24mac402C*");
MODULE_ALIAS("of:N*T*Catmel,24mac602");
MODULE_ALIAS("of:N*T*Catmel,24mac602C*");
MODULE_ALIAS("of:N*T*Catmel,spd");
MODULE_ALIAS("of:N*T*Catmel,spdC*");
MODULE_ALIAS("of:N*T*Catmel,24c04");
MODULE_ALIAS("of:N*T*Catmel,24c04C*");
MODULE_ALIAS("of:N*T*Catmel,24cs04");
MODULE_ALIAS("of:N*T*Catmel,24cs04C*");
MODULE_ALIAS("of:N*T*Catmel,24c08");
MODULE_ALIAS("of:N*T*Catmel,24c08C*");
MODULE_ALIAS("of:N*T*Catmel,24cs08");
MODULE_ALIAS("of:N*T*Catmel,24cs08C*");
MODULE_ALIAS("of:N*T*Catmel,24c16");
MODULE_ALIAS("of:N*T*Catmel,24c16C*");
MODULE_ALIAS("of:N*T*Catmel,24cs16");
MODULE_ALIAS("of:N*T*Catmel,24cs16C*");
MODULE_ALIAS("of:N*T*Catmel,24c32");
MODULE_ALIAS("of:N*T*Catmel,24c32C*");
MODULE_ALIAS("of:N*T*Catmel,24cs32");
MODULE_ALIAS("of:N*T*Catmel,24cs32C*");
MODULE_ALIAS("of:N*T*Catmel,24c64");
MODULE_ALIAS("of:N*T*Catmel,24c64C*");
MODULE_ALIAS("of:N*T*Catmel,24cs64");
MODULE_ALIAS("of:N*T*Catmel,24cs64C*");
MODULE_ALIAS("of:N*T*Catmel,24c128");
MODULE_ALIAS("of:N*T*Catmel,24c128C*");
MODULE_ALIAS("of:N*T*Catmel,24c256");
MODULE_ALIAS("of:N*T*Catmel,24c256C*");
MODULE_ALIAS("of:N*T*Catmel,24c512");
MODULE_ALIAS("of:N*T*Catmel,24c512C*");
MODULE_ALIAS("of:N*T*Catmel,24c1024");
MODULE_ALIAS("of:N*T*Catmel,24c1024C*");
MODULE_ALIAS("i2c:24c00");
MODULE_ALIAS("i2c:24c01");
MODULE_ALIAS("i2c:24cs01");
MODULE_ALIAS("i2c:24c02");
MODULE_ALIAS("i2c:24cs02");
MODULE_ALIAS("i2c:24mac402");
MODULE_ALIAS("i2c:24mac602");
MODULE_ALIAS("i2c:spd");
MODULE_ALIAS("i2c:24c04");
MODULE_ALIAS("i2c:24cs04");
MODULE_ALIAS("i2c:24c08");
MODULE_ALIAS("i2c:24cs08");
MODULE_ALIAS("i2c:24c16");
MODULE_ALIAS("i2c:24cs16");
MODULE_ALIAS("i2c:24c32");
MODULE_ALIAS("i2c:24cs32");
MODULE_ALIAS("i2c:24c64");
MODULE_ALIAS("i2c:24cs64");
MODULE_ALIAS("i2c:24c128");
MODULE_ALIAS("i2c:24c256");
MODULE_ALIAS("i2c:24c512");
MODULE_ALIAS("i2c:24c1024");
MODULE_ALIAS("i2c:at24");

MODULE_INFO(srcversion, "E9B15CF4BAC29DB6E90DF23");
MODULE_INFO(rhelversion, "8.0");

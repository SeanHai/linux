#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x91715312, "sprintf" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x6e7e75f4, "request_firmware_nowait" },
	{ 0xfe9b9dd, "devm_gpio_request_one" },
	{ 0xe6478472, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x89318f48, "gpiod_set_raw_value" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0x28318305, "snprintf" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x84277b2a, "release_firmware" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8876472FA8355976DAD95B1");
MODULE_INFO(rhelversion, "8.0");

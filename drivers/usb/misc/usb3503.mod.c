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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x27e1a049, "printk" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xa9d9c835, "devm_clk_get" },
	{ 0xfe9b9dd, "devm_gpio_request_one" },
	{ 0x3a0e07d2, "gpiod_set_raw_value_cansleep" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0xe6478472, "_dev_info" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0x749fffb4, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:usb3503");

MODULE_INFO(srcversion, "BDEBC9EEBE9E61AD3215C36");
MODULE_INFO(rhelversion, "8.0");

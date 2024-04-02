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
	{ 0x39c1933d, "power_supply_changed" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xa848e02c, "gpiod_to_irq" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0x8368044b, "power_supply_register" },
	{ 0xb552153b, "__devm_regmap_init_i2c" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x37c5895d, "power_supply_get_drvdata" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5666f7fc, "regmap_read" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc768d450, "power_supply_unregister" },
	{ 0x67c9254d, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:smb347");

MODULE_INFO(srcversion, "951F270772DCA86F919E185");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x703e2d12, "lp55xx_unregister_sysfs" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xfa582888, "lp55xx_unregister_leds" },
	{ 0x2b1b44b9, "lp55xx_register_sysfs" },
	{ 0x81fb214e, "lp55xx_of_populate_pdata" },
	{ 0xd2407e2b, "lp55xx_deinit_device" },
	{ 0xa780a237, "lp55xx_register_leds" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3bf0447a, "lp55xx_init_device" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x25037b6d, "lp55xx_read" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf5818a10, "lp55xx_update_bits" },
	{ 0xd6ce08a2, "lp55xx_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=leds-lp55xx-common";

MODULE_ALIAS("i2c:lp5523");
MODULE_ALIAS("i2c:lp55231");

MODULE_INFO(srcversion, "FBF6555119EDC2A93CC464B");
MODULE_INFO(rhelversion, "8.0");

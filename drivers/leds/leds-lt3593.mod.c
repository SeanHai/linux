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
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3a0e07d2, "gpiod_set_raw_value_cansleep" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0xfe9b9dd, "devm_gpio_request_one" },
	{ 0xe6478472, "_dev_info" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EECDD3CB975C42FC8C5C550");
MODULE_INFO(rhelversion, "8.0");

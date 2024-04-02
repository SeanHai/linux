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
	{ 0xf9c388e5, "dev_err" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xf54ba6f6, "pps_register_source" },
	{ 0x28318305, "snprintf" },
	{ 0xa848e02c, "gpiod_to_irq" },
	{ 0x7bcafccf, "gpiod_direction_input" },
	{ 0x1a8c3ad8, "devm_gpio_request" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1db6fe64, "pps_event" },
	{ 0xb0c77147, "gpiod_get_raw_value" },
	{ 0xba5b7eb9, "gpio_to_desc" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0xe6478472, "_dev_info" },
	{ 0x87b45dcc, "pps_unregister_source" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cpps-gpio");
MODULE_ALIAS("of:N*T*Cpps-gpioC*");

MODULE_INFO(srcversion, "D2C22B0A465DA63746EFB59");
MODULE_INFO(rhelversion, "8.0");

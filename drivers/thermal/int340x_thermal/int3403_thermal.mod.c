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
	{ 0xdaf7a882, "int340x_thermal_read_trips" },
	{ 0xe1cf2bb, "thermal_zone_device_update" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x27e1a049, "printk" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xc4163a22, "int340x_thermal_zone_add" },
	{ 0x37a0cba, "kfree" },
	{ 0x7d4facf, "thermal_cooling_device_register" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xa8871632, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x2ff3cc15, "thermal_cooling_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=int340x_thermal_zone";

MODULE_ALIAS("acpi*:INT3403:*");

MODULE_INFO(srcversion, "0D65C7B4FE3EC995904D09A");
MODULE_INFO(rhelversion, "8.0");

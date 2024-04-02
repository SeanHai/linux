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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xb6d860ba, "i8042_install_filter" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf21ea555, "lis3lv02d_init_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xe2cffb14, "acpi_walk_resources" },
	{ 0xbb786aaf, "serio_interrupt" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x27e1a049, "printk" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xfe829980, "lis3lv02d_remove_fs" },
	{ 0x317a8ad6, "flush_work" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x3d2e6568, "lis3lv02d_joystick_disable" },
	{ 0x27892028, "i8042_remove_filter" },
	{ 0x6816739f, "lis3lv02d_poweroff" },
	{ 0x9cc9ddb3, "lis3lv02d_poweron" },
	{ 0xbe4c6ae5, "lis3_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lis3lv02d";

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");

MODULE_INFO(srcversion, "D6089C818BE005B0E421C3A");
MODULE_INFO(rhelversion, "8.0");

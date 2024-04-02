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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0x985ca3e0, "single_release" },
	{ 0x4b94a99b, "seq_read" },
	{ 0x291eb36, "seq_lseek" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xdc75c81f, "input_free_device" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x5d1c022e, "backlight_device_register" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xd57f0cd9, "rfkill_alloc" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xf789deff, "input_register_device" },
	{ 0xe134f8e2, "sparse_keymap_setup" },
	{ 0xd55379f7, "input_allocate_device" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x91715312, "sprintf" },
	{ 0x36bd7663, "backlight_force_update" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x41715c18, "seq_puts" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xc7f4b92, "single_open" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x752d5f5b, "kstrtobool" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xda0e8aec, "input_unregister_device" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x72a6ba54, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x5c310c55, "sparse_keymap_report_event" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x27e1a049, "printk" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,wmi,video,sparse-keymap";

MODULE_ALIAS("acpi*:VPC2004:*");

MODULE_INFO(srcversion, "1399D37E5EA7538AE1F597C");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x29686856, "hwmon_device_register" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xa0d5ac30, "sysfs_notify" },
	{ 0xe6478472, "_dev_info" },
	{ 0x9166fada, "strncpy" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0x85ffabba, "get_device" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xc985b4ca, "kobject_create_and_add" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x91715312, "sprintf" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x2cec6038, "kobject_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xd0c86c05, "put_device" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ACPI000D:*");

MODULE_INFO(srcversion, "0A8E3280695CF64117DAB01");
MODULE_INFO(rhelversion, "8.0");

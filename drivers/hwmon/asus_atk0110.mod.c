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
	{ 0xd5272c1b, "simple_attr_release" },
	{ 0x99824fdf, "simple_attr_write" },
	{ 0x388c5d90, "simple_attr_read" },
	{ 0xfc81423, "generic_file_llseek" },
	{ 0x28cde093, "no_llseek" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x27e1a049, "printk" },
	{ 0xf4b754fd, "acpi_resources_are_enforced" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0x40c9f093, "debugfs_create_x32" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0x7772a653, "hwmon_device_register_with_groups" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0xe6478472, "_dev_info" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x28318305, "snprintf" },
	{ 0x18f517ed, "devm_kstrdup" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x53f8e9af, "simple_attr_open" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ATK0110:*");

MODULE_INFO(srcversion, "13E3F41B2618540247D501F");
MODULE_INFO(rhelversion, "8.0");

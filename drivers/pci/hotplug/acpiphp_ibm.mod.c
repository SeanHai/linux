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
	{ 0x9b76f02f, "sysfs_remove_bin_file" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xa8af86d0, "sysfs_create_bin_file" },
	{ 0xb71102aa, "acpiphp_unregister_attention" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x154f1b7, "acpiphp_register_attention" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x202ca10c, "pci_slots_kset" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xf04429b4, "acpi_bus_get_status_handle" },
	{ 0x27e1a049, "printk" },
	{ 0xded6a415, "acpi_get_object_info" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "724EDBD49B849B592138709");
MODULE_INFO(rhelversion, "8.0");

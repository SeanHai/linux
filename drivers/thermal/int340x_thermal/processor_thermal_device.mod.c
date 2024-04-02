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
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0xf80be44e, "rdmsr_safe_on_cpu" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xe1cf2bb, "thermal_zone_device_update" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xb512748d, "intel_soc_dts_iosf_init" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xc4163a22, "int340x_thermal_zone_add" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xf0aeba88, "sysfs_create_group" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x3102ceca, "intel_soc_dts_iosf_interrupt_handler" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x91715312, "sprintf" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x32fd56fe, "intel_soc_dts_iosf_exit" },
	{ 0xdad01803, "sysfs_remove_group" },
	{ 0xa8871632, "int340x_thermal_zone_remove" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_soc_dts_iosf,int340x_thermal_zone";

MODULE_ALIAS("acpi*:INT3401:*");
MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003E83sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000318Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4C7E681A5BB7759655A13B5");
MODULE_INFO(rhelversion, "8.0");

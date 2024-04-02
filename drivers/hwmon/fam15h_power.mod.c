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
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x27e1a049, "printk" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x109525c0, "pv_cpu_ops" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x8cac8c08, "free_cpumask_var" },
	{ 0x18fb2caf, "cpus_read_unlock" },
	{ 0xb39fe1a9, "on_each_cpu_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0x31cd8869, "__cpu_online_mask" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xa04f945a, "cpus_read_lock" },
	{ 0x40cf6820, "cpu_sibling_map" },
	{ 0x177847e, "cpu_info" },
	{ 0x525c1ee, "zalloc_cpumask_var" },
	{ 0x15244c9d, "boot_cpu_data" },
	{ 0x91715312, "sprintf" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x78040ede, "pci_bus_write_config_dword" },
	{ 0xebad434c, "pci_bus_read_config_dword" },
	{ 0x8d710940, "pci_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00001604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001574sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001534sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001584sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "46935F3174D7107D0CBC255");
MODULE_INFO(rhelversion, "8.0");

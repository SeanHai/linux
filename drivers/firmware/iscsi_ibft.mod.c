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
	{ 0x755becec, "iscsi_boot_create_acpitbl" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0x5ef90e8e, "sysfs_create_link" },
	{ 0xdfe3440, "pci_get_domain_bus_and_slot" },
	{ 0xa6ab1b8c, "iscsi_boot_create_target" },
	{ 0xa4c5eff2, "iscsi_boot_create_ethernet" },
	{ 0xe6ecb2d7, "iscsi_boot_create_initiator" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1366e926, "iscsi_boot_create_kset" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xceed8318, "ibft_addr" },
	{ 0x5c2596e5, "iscsi_boot_destroy_kset" },
	{ 0xbb6d8463, "sysfs_remove_link" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_boot_sysfs";


MODULE_INFO(srcversion, "9D413A67DC214F0B6D7AA71");
MODULE_INFO(rhelversion, "8.0");

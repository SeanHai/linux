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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x1104443c, "i2c_add_adapter" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x8a5b7e2a, "pcim_iomap" },
	{ 0x18c475b, "pci_request_region" },
	{ 0x6978a86b, "acpi_check_resource_conflict" },
	{ 0x28318305, "snprintf" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xbc41de09, "set_primary_fwnode" },
	{ 0x78843f2d, "is_acpi_device_node" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xac7396a8, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00000C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F15sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "49EFC3F516F0E5715F56248");
MODULE_INFO(rhelversion, "8.0");

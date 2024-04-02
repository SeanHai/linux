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
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0x69acdf38, "memcpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x5eba9410, "__request_region" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x27e1a049, "printk" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001101d00009500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00009400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00009401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001101d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000134Ad00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8FFC49486687C56C976731B");
MODULE_INFO(rhelversion, "8.0");

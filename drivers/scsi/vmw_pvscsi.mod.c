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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x121da905, "queue_work_on" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x29361773, "complete" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe94d9e1d, "scsi_dma_map" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0xe6478472, "_dev_info" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x43a53735, "__alloc_workqueue_key" },
	{ 0x28318305, "snprintf" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x408bd9c1, "scsi_add_device" },
	{ 0x733dc065, "scsi_device_put" },
	{ 0xf50eb3eb, "scsi_remove_device" },
	{ 0xd2491c3c, "scsi_device_lookup" },
	{ 0xaff06b0c, "scsi_host_get" },
	{ 0x27e1a049, "printk" },
	{ 0x91715312, "sprintf" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000015ADd000007C0sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9D131A8113D9D5F44EAB9B7");
MODULE_INFO(rhelversion, "8.0");

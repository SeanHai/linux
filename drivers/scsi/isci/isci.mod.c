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
	{ 0x45129f0f, "sas_change_queue_depth" },
	{ 0xbb8c805, "dma_direct_unmap_sg" },
	{ 0x3abba457, "sas_release_transport" },
	{ 0xde455655, "pci_free_irq_vectors" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x286cf33, "sas_drain_work" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xd67e02a3, "sas_ssp_task_response" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x77fc2722, "sas_suspend_ha" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9de79b9d, "sas_task_abort" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb9af333c, "pci_biosrom_size" },
	{ 0xca482dd2, "sas_phy_reset" },
	{ 0x62ef911, "sas_eh_target_reset_handler" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2b912dfc, "sas_get_local_phy" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x4a8e3d34, "try_test_sas_gpio_gp_bit" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0x898c27fe, "pci_alloc_irq_vectors_affinity" },
	{ 0xc9aa8e76, "sas_target_alloc" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf7d6636f, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x22dd15fc, "sas_ioctl" },
	{ 0x1aa6f7d9, "dma_direct_map_page" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x28985b9f, "mod_timer" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x9d284533, "efi" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x91082173, "sas_unregister_ha" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xd0edfd15, "dma_direct_unmap_page" },
	{ 0xe6478472, "_dev_info" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xd396a18, "sas_register_ha" },
	{ 0x2683b6a, "pci_map_biosrom" },
	{ 0x57eae908, "sas_eh_abort_handler" },
	{ 0xa350a9d3, "sas_resume_ha" },
	{ 0xcad615e2, "devm_free_irq" },
	{ 0xd0c86c05, "put_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xdac7df67, "sas_target_destroy" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xaabb3a1f, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x160227, "sas_queuecommand" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3d8bfe04, "sas_ata_schedule_reset" },
	{ 0x642663cc, "sas_remove_host" },
	{ 0x4fd5932f, "param_ops_byte" },
	{ 0xa44d2dc1, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xaec9def8, "sas_bios_param" },
	{ 0x250ffaa1, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf8a69479, "sas_prep_resume_ha" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xf82eea4a, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x326425ca, "pci_unmap_biosrom" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x29361773, "complete" },
	{ 0x28318305, "snprintf" },
	{ 0xec89da9c, "param_ops_ushort" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x713ee557, "sas_slave_configure" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x84277b2a, "release_firmware" },
	{ 0xa62a36a9, "sas_domain_attach_transport" },
	{ 0x36b3d463, "dma_ops" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libsas,scsi_transport_sas";

MODULE_ALIAS("pci:v00008086d00001D61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D6Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5F0D920BF6197F7BB93773C");
MODULE_INFO(rhelversion, "8.0");

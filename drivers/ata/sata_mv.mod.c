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
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x7f680436, "ata_scsi_change_queue_depth" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0xc512662d, "ata_sff_port_ops" },
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0x1895b770, "platform_driver_unregister" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xf65b883b, "__platform_driver_register" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xcd8dd495, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6a7b6976, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x8db6f076, "ata_sff_queue_pio_task" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xc46b4f01, "ata_bmdma_qc_issue" },
	{ 0x4bd0aaef, "ata_link_printk" },
	{ 0x8fe95700, "ata_port_abort" },
	{ 0x32592244, "ata_link_offline" },
	{ 0x7f632a44, "ata_bmdma_port_intr" },
	{ 0xa9f9f640, "sata_async_notification" },
	{ 0x4bba38a3, "sata_scr_write_flush" },
	{ 0x27f42ea7, "sata_scr_read" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9f4dc2, "ata_link_abort" },
	{ 0xd033bed0, "ata_ehi_push_desc" },
	{ 0xecbc643e, "ata_ehi_clear_desc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xefd61b23, "ata_port_printk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe5d80a13, "phy_power_on" },
	{ 0x8a9016ea, "devm_phy_optional_get" },
	{ 0x91715312, "sprintf" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xb1166309, "clk_get" },
	{ 0x92e39ee2, "devm_ioremap" },
	{ 0x874ce5f3, "platform_get_irq" },
	{ 0x996c611b, "platform_get_resource" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9dda5412, "ata_sff_softreset" },
	{ 0xe048c60, "sata_std_hardreset" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0xe87f9ea8, "pci_try_set_mwi" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0x8ff1cef8, "dmam_pool_create" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0x7844ce69, "sata_pmp_error_handler" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0xdf7a6585, "ata_eh_analyze_ncq_error" },
	{ 0x48001527, "ata_sff_dma_pause" },
	{ 0xf10de535, "ioread8" },
	{ 0x87b8798d, "sg_next" },
	{ 0x586694d0, "ata_qc_complete_multiple" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xffa4c99a, "phy_power_off" },
	{ 0x45edfad6, "ata_host_detach" },
	{ 0xb564963c, "ata_host_suspend" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x27e1a049, "printk" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1BD160C91E75FA62BDEE147");
MODULE_INFO(rhelversion, "8.0");

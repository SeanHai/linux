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
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x11230695, "ata_bmdma32_port_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x87b8798d, "sg_next" },
	{ 0x41e448d9, "ata_dev_next" },
	{ 0x79a48c89, "ata_do_set_mode" },
	{ 0xebb54635, "ata_dev_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xf10de535, "ioread8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x48001527, "ata_sff_dma_pause" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd033bed0, "ata_ehi_push_desc" },
	{ 0xd858c959, "ata_sff_hsm_move" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7e3db365, "ata_bmdma_irq_clear" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe6478472, "_dev_info" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00003112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000436Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000437Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D29FA7FE74BF6C8AC909EDC");
MODULE_INFO(rhelversion, "8.0");

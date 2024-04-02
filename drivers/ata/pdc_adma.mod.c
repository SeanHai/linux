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
	{ 0x9878e8cb, "ata_common_sdev_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0xc512662d, "ata_sff_port_ops" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xff7ed1d0, "ata_sff_qc_issue" },
	{ 0x44706697, "ata_sff_prereset" },
	{ 0x27e1a049, "printk" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8fe95700, "ata_port_abort" },
	{ 0xc0c8a377, "ata_qc_complete" },
	{ 0x84a12885, "ata_sff_check_status" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0xd033bed0, "ata_ehi_push_desc" },
	{ 0xecbc643e, "ata_ehi_clear_desc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v000015E9d00001841sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E62591882C608717C9FE458");
MODULE_INFO(rhelversion, "8.0");

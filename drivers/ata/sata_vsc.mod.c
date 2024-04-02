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
	{ 0x2a846986, "ata_bmdma_port_ops" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x84a12885, "ata_sff_check_status" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x8fe95700, "ata_port_abort" },
	{ 0x9bf62a6c, "ata_port_freeze" },
	{ 0x7f632a44, "ata_bmdma_port_intr" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92c878b0, "pci_intx" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001725d00007174sv*sd*bc01sc06i00*");
MODULE_ALIAS("pci:v00008086d00003200sv*sd*bc01sc06i00*");

MODULE_INFO(srcversion, "EF67AFB0C93DDC97EACC2C4");
MODULE_INFO(rhelversion, "8.0");

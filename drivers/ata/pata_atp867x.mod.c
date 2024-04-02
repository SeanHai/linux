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
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xbc7b5bef, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xee70ea31, "ata_port_desc" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0x9a248381, "pcim_iomap_regions" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x297cc0d1, "ata_timing_compute" },
	{ 0x55f3dae6, "ata_dev_pair" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001191d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d0000000Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4B342F9FE6F7D82C2020157");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0xd81e47b2, "ahci_sdev_attrs" },
	{ 0x8a88e41f, "ahci_shost_attrs" },
	{ 0x92a0f1e7, "ata_scsi_unlock_native_capacity" },
	{ 0xb9366712, "ata_std_bios_param" },
	{ 0x7f680436, "ata_scsi_change_queue_depth" },
	{ 0x5b1dd5cd, "ata_scsi_slave_destroy" },
	{ 0xca07611e, "ata_scsi_slave_config" },
	{ 0x858e2d45, "ata_scsi_queuecmd" },
	{ 0xf69450fd, "ata_scsi_ioctl" },
	{ 0x9685739b, "ahci_ops" },
	{ 0xd80fdb3f, "ata_pci_remove_one" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfbf3eeb8, "ahci_fill_cmd_slot" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x27e1a049, "printk" },
	{ 0x7fb1163b, "pcim_pin_device" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x41cd18aa, "ata_print_version" },
	{ 0xf0999aef, "ahci_host_activate" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x6d7069ba, "ahci_print_info" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x26f93bfe, "ata_dummy_port_ops" },
	{ 0x703f6c08, "ata_port_pbar_desc" },
	{ 0xde47eeb, "ata_host_alloc_pinfo" },
	{ 0xede72fec, "ahci_set_em_messages" },
	{ 0xf102bfea, "ahci_save_initial_config" },
	{ 0xd5184fc1, "pcim_iomap_table" },
	{ 0x2927374a, "pcim_iomap_regions_request_all" },
	{ 0xa0b7be94, "pcim_enable_device" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x6e540b86, "ahci_port_resume" },
	{ 0xfb578fc5, "memset" },
	{ 0xf0191bff, "dmam_alloc_attrs" },
	{ 0xe6478472, "_dev_info" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9c5b360f, "ata_pci_device_suspend" },
	{ 0xea6bfd37, "ahci_init_controller" },
	{ 0xa2e069a5, "ahci_reset_controller" },
	{ 0x2ce926a7, "ata_host_resume" },
	{ 0x6e04cd93, "ata_pci_device_do_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci,libata";

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1114CC4CA2B71FD23ADD202");
MODULE_INFO(rhelversion, "8.0");

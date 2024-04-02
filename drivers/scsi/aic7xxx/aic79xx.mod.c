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
	{ 0x5eba9410, "__request_region" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x2e2f24ac, "scsi_device_lookup_by_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9706372e, "scsi_change_queue_depth" },
	{ 0xe7138dbc, "spi_dv_device" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0x349cba85, "strchr" },
	{ 0x9b5d76b9, "scsi_host_alloc" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x8e82828e, "iomem_resource" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xb559ea59, "scsi_add_host_with_dma" },
	{ 0x661bca60, "scsi_block_requests" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xe637fa94, "dev_printk" },
	{ 0x1057db90, "scsi_unblock_requests" },
	{ 0x36508a4d, "pci_get_slot" },
	{ 0x41715c18, "seq_puts" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3288792d, "pci_write_config_byte" },
	{ 0x3c92d494, "scmd_printk" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x85df9b6c, "strsep" },
	{ 0x23ea26e3, "spi_attach_transport" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x9867faf6, "scsi_cmd_get_serial" },
	{ 0x91715312, "sprintf" },
	{ 0xc499ae1e, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd09eff23, "dma_get_required_mask" },
	{ 0x103b0514, "param_ops_charp" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xab769aaf, "scsi_is_host_device" },
	{ 0xec02a35f, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x7c1372e8, "panic" },
	{ 0x88f8e7c6, "seq_putc" },
	{ 0x5a921311, "strncmp" },
	{ 0xf33f3525, "pci_read_config_word" },
	{ 0x7bdd5516, "scsi_scan_host" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xb99b4c70, "sdev_prefix_printk" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x318f7969, "add_timer" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xefd9029, "scsi_host_put" },
	{ 0x61651be, "strcat" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xa202a8e5, "kmalloc_order_trace" },
	{ 0xd0807598, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d63b41f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4487b832, "spi_display_xfer_agreement" },
	{ 0xedc03953, "iounmap" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x9f4a4cdf, "scsi_report_bus_reset" },
	{ 0x2c2719bd, "pci_dev_put" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x7256f41e, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x90c988cb, "scsi_report_device_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe94d9e1d, "scsi_dma_map" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_spi";

MODULE_ALIAS("pci:v00009005d00008000sv00009005sd00000060bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008000sv00009005sd00000060bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008080sv00009005sd00000060bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008080sv00009005sd00000060bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000045bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv00009005sd00000045bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000045bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv00009005sd00000045bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008012sv00009005sd00000042bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008012sv00009005sd00000042bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008092sv00009005sd00000042bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008092sv00009005sd00000042bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008013sv00009005sd00000043bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008013sv00009005sd00000043bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008093sv00009005sd00000043bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008093sv00009005sd00000043bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008014sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008014sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008094sv00009005sd00000044bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008094sv00009005sd00000044bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008010sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008010sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008090sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008090sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008015sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008015sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008095sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008095sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008016sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008016sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008096sv00009005sd00000040bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008096sv00009005sd00000040bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00009005sd00000041bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00009005sd00000041bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00000E11sd000000ACbc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv00000E11sd000000ACbc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008000sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008000sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008080sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008080sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008001sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008081sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008081sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008002sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008002sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008082sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008082sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008003sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008003sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008083sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008083sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008004sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008004sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008084sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008084sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008005sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008005sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008085sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008085sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008006sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008086sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008086sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008007sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008007sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008087sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008087sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008008sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008088sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008088sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008009sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008089sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008089sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000800Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000800Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000808Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000808Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008010sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008090sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008090sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008011sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008011sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008091sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008091sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008012sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008012sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008092sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008092sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008013sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008013sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008093sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008093sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008014sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008014sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008094sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008094sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008015sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008015sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008095sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008095sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008016sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008016sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008096sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008096sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008017sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008017sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008097sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008097sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008018sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008098sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008098sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008019sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d00008099sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d00008099sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Asv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Bsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Bsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Csv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Csv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Dsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Dsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Esv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000801Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000801Fsv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00009005d0000809Fsv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00009005d0000809Fsv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "77724E45CC4AD00B226F9B0");
MODULE_INFO(rhelversion, "8.0");

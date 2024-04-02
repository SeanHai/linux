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
	{ 0x9a910d01, "simple_open" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x716265c7, "debugfs_initialized" },
	{ 0x27e1a049, "printk" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xc27daf28, "ntb_register_device" },
	{ 0xb03676a8, "debugfs_create_file" },
	{ 0xf5284f7e, "debugfs_create_dir" },
	{ 0xfcec1a67, "pci_enable_msi" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x21f51fb1, "pci_enable_msix_range" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xe4bf7f13, "dma_set_coherent_mask" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xdcd000b8, "kmem_cache_alloc_node_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x68f927fb, "cancel_delayed_work_sync" },
	{ 0x5d11132b, "debugfs_remove_recursive" },
	{ 0x4e6b2cd6, "ntb_unregister_device" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x6e4edad6, "pci_clear_master" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x4ca9669f, "scnprintf" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe1f4fcf5, "pci_read_config_dword" },
	{ 0xb48340b, "ntb_link_event" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe6478472, "_dev_info" },
	{ 0x1ced0b58, "ntb_db_event" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x92c878b0, "pci_intx" },
	{ 0x88cfc160, "pci_disable_msi" },
	{ 0x37a0cba, "kfree" },
	{ 0x862fba34, "pci_disable_msix" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ntb";

MODULE_ALIAS("pci:v00001022d0000145Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4F2A996967379D06915E639");
MODULE_INFO(rhelversion, "8.0");

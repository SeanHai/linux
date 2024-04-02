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
	{ 0x317a8ad6, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x402b8281, "__request_module" },
	{ 0x7ce35843, "cx88_risc_databuffer" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdd5c21c, "pci_read_config_byte" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x7aa125d3, "cx88_sram_channel_setup" },
	{ 0x240d6d5d, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x56898d73, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe6617477, "vb2_buffer_done" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x8cbfa361, "vb2_plane_cookie" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f5d0a93, "cx88_core_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x34fd1c2e, "cx88_core_irq" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20f5048a, "pci_set_power_state" },
	{ 0xb044101, "cx88_core_put" },
	{ 0x37a0cba, "kfree" },
	{ 0xab32af80, "cx88_shutdown" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x121da905, "queue_work_on" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0xee7915ff, "pci_choose_state" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0x79173a99, "cx88_wakeup" },
	{ 0x7350d3da, "cx88_reset" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x93527c4c, "pci_save_state" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx88xx,videobuf2-common";

MODULE_ALIAS("pci:v000014F1d00008802sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1B8212F8D85A8843A4AFAF4");
MODULE_INFO(rhelversion, "8.0");

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
	{ 0x2d3385d3, "system_wq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x8cfd46da, "flexcop_eeprom_check_mac_addr" },
	{ 0x440a48cf, "flexcop_i2c_request" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x16ec1ee9, "flexcop_pass_dmx_data" },
	{ 0xc1c794e, "delayed_work_timer_fn" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb46a45f, "pci_release_regions" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x4ae481a4, "flexcop_device_initialize" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0x47f10748, "flexcop_device_kfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0xb5a8d234, "cancel_delayed_work" },
	{ 0xc94fb8eb, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0x800ca4f8, "flexcop_pid_feed_control" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0x6fab717d, "flexcop_device_kmalloc" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0xebf74d24, "flexcop_sram_set_dest" },
	{ 0xd1e4ec46, "queue_delayed_work_on" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ccad732, "flexcop_pass_dmx_packets" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3c24cba5, "pci_request_regions" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x25c5ba6e, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xfe57a5cb, "flexcop_device_exit" },
	{ 0xc1514a3b, "free_irq" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=b2c2-flexcop";

MODULE_ALIAS("pci:v000013D0d00002103sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2281D329D8E643444060880");
MODULE_INFO(rhelversion, "8.0");

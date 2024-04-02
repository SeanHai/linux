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
	{ 0x123130e4, "param_get_uint" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xabd43862, "bchannel_senddata" },
	{ 0x1372c765, "recv_Dchannel" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfb902c27, "get_next_dframe" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x21c97b98, "queue_ch_frame" },
	{ 0xe367c99, "dchannel_senddata" },
	{ 0x318f7969, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xe70fad6, "recv_Bchannel" },
	{ 0x9fc1b3b0, "get_next_bframe" },
	{ 0x509f625d, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xbb676138, "create_l1" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x5eba9410, "__request_region" },
	{ 0xd98d9204, "mISDN_initbchannel" },
	{ 0x7cb5bd6d, "mISDN_initdchannel" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x37a0cba, "kfree" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0x68e63115, "mISDN_freedchannel" },
	{ 0xad3ea97, "mISDN_freebchannel" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x28318305, "snprintf" },
	{ 0x677412db, "sev_enable_key" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xd101e2f6, "bchannel_get_rxbuf" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x6dbad168, "param_set_uint" },
	{ 0xbe48a613, "mISDN_ctrl_bchannel" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x433175d7, "mISDN_clear_bchannel" },
	{ 0x27e1a049, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x588886a6, "l1_event" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00000675d00001702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00006692sv000016ECsd00003409bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00006692sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5F7FE35BD2D1DD07ED5F3F8");
MODULE_INFO(rhelversion, "8.0");

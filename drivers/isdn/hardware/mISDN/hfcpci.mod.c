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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0x21c97b98, "queue_ch_frame" },
	{ 0xe367c99, "dchannel_senddata" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xabd43862, "bchannel_senddata" },
	{ 0x1372c765, "recv_Dchannel" },
	{ 0xfb902c27, "get_next_dframe" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd101e2f6, "bchannel_get_rxbuf" },
	{ 0xe70fad6, "recv_Bchannel" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xbb676138, "create_l1" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd7c584a, "pci_write_config_dword" },
	{ 0x80d50279, "dma_alloc_attrs" },
	{ 0xa54c0ba0, "dma_set_mask" },
	{ 0x50fe27c8, "pci_set_master" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd98d9204, "mISDN_initbchannel" },
	{ 0x7cb5bd6d, "mISDN_initdchannel" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x588886a6, "l1_event" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x68e63115, "mISDN_freedchannel" },
	{ 0xad3ea97, "mISDN_freebchannel" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xeddfd55a, "dma_free_attrs" },
	{ 0xfa5223cc, "del_timer" },
	{ 0x318f7969, "add_timer" },
	{ 0xe30d174f, "driver_for_each_device" },
	{ 0xf7d6636f, "current_task" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x9fc1b3b0, "get_next_bframe" },
	{ 0x509f625d, "consume_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xbe48a613, "mISDN_ctrl_bchannel" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x433175d7, "mISDN_clear_bchannel" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000182Dd00003069sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "49FAD412C5073DC9FB53038");
MODULE_INFO(rhelversion, "8.0");

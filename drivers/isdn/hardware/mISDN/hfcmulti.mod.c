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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x6dc87645, "param_array_ops" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x6e524bb0, "__pci_register_driver" },
	{ 0xc749fd1c, "pci_unregister_driver" },
	{ 0x26236de8, "mISDN_clock_update" },
	{ 0x35287859, "recv_Bchannel_skb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x121da905, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xc3401729, "mISDN_register_clock" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x5eba9410, "__request_region" },
	{ 0x1d29dff0, "pci_enable_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xe8f617eb, "mISDN_unregister_clock" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xbb676138, "create_l1" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x5eeee198, "mISDN_register_device" },
	{ 0x28318305, "snprintf" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xd98d9204, "mISDN_initbchannel" },
	{ 0x7cb5bd6d, "mISDN_initdchannel" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1497ce1b, "mISDN_unregister_device" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x68e63115, "mISDN_freedchannel" },
	{ 0x37a0cba, "kfree" },
	{ 0xad3ea97, "mISDN_freebchannel" },
	{ 0x21c97b98, "queue_ch_frame" },
	{ 0xe367c99, "dchannel_senddata" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0x588886a6, "l1_event" },
	{ 0xabd43862, "bchannel_senddata" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf7d6636f, "current_task" },
	{ 0xbe48a613, "mISDN_ctrl_bchannel" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x433175d7, "mISDN_clear_bchannel" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1372c765, "recv_Dchannel" },
	{ 0xe70fad6, "recv_Bchannel" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xd101e2f6, "bchannel_get_rxbuf" },
	{ 0xab4a2042, "recv_Dchannel_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xfb902c27, "get_next_dframe" },
	{ 0x9fc1b3b0, "get_next_bframe" },
	{ 0x509f625d, "consume_skb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x27e1a049, "printk" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdfb2ae49, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xb9a8986d, "pci_write_config_word" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B567bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B566bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B569bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B560bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B568bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B620bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d0000B410sv0000D161sd0000B410bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B540bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B550bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd00001234bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E888bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E884bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B761bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B762bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B562bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B56Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd000016B8bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B522bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B552bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B622bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000E998bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B55Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B563bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B56Abc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B565bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B564bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd000030B1bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B523bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000C523bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003136bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003137bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B553bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3CF7C155BC0E00D5BF21F31");
MODULE_INFO(rhelversion, "8.0");

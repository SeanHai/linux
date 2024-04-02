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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x9fc1b3b0, "get_next_bframe" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xe70fad6, "recv_Bchannel" },
	{ 0xd101e2f6, "bchannel_get_rxbuf" },
	{ 0x21c97b98, "queue_ch_frame" },
	{ 0x81b1b255, "cancel_work_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x1372c765, "recv_Dchannel" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xbe48a613, "mISDN_ctrl_bchannel" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x433175d7, "mISDN_clear_bchannel" },
	{ 0xf71e8617, "skb_queue_purge" },
	{ 0xfb902c27, "get_next_dframe" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe367c99, "dchannel_senddata" },
	{ 0x318f7969, "add_timer" },
	{ 0xd98d9204, "mISDN_initbchannel" },
	{ 0xabd43862, "bchannel_senddata" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x588886a6, "l1_event" },
	{ 0x121da905, "queue_work_on" },
	{ 0x28318305, "snprintf" },
	{ 0x7cb5bd6d, "mISDN_initdchannel" },
	{ 0x509f625d, "consume_skb" },
	{ 0x68e63115, "mISDN_freedchannel" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xbb676138, "create_l1" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";


MODULE_INFO(srcversion, "659779F78E4B21A04F78910");
MODULE_INFO(rhelversion, "8.0");

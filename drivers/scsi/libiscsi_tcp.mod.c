#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x9f7a6c57, "skb_seq_read" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x97868aef, "__kfifo_alloc" },
	{ 0xe637fa94, "dev_printk" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x87b8798d, "sg_next" },
	{ 0x209bc432, "iscsi_requeue_task" },
	{ 0x3bef2f73, "iscsi_pool_init" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd23084bc, "crypto_ahash_final" },
	{ 0xb378c2af, "iscsi_itt_to_ctask" },
	{ 0x58dd4212, "crypto_ahash_digest" },
	{ 0x6ef1e985, "skb_abort_seq_read" },
	{ 0xf7d6636f, "current_task" },
	{ 0x20c55ae0, "sscanf" },
	{ 0x302cd317, "skb_prepare_seq_read" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x73ff3bc9, "iscsi_conn_teardown" },
	{ 0xe3edc729, "iscsi_put_task" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x828b8098, "iscsi_prep_data_out_pdu" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9e711e29, "iscsi_complete_pdu" },
	{ 0x58ace4f3, "iscsi_conn_failure" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x69acdf38, "memcpy" },
	{ 0x508e27d1, "__iscsi_complete_pdu" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x8d303b1b, "iscsi_pool_free" },
	{ 0xc345527b, "iscsi_verify_itt" },
	{ 0x8bc8d2d0, "iscsi_conn_setup" },
	{ 0x161745c6, "iscsi_update_cmdsn" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";


MODULE_INFO(srcversion, "FDAF2FB5CF0FA9AE900B10C");
MODULE_INFO(rhelversion, "8.0");

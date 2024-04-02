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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x2d008a32, "pskb_trim_rcsum_slow" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x58f85378, "__pskb_pull_tail" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x5def83f9, "skb_push" },
	{ 0x552c4aaf, "dev_remove_pack" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xed946a48, "init_net" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x3490f9db, "dev_add_pack" },
	{ 0x509f625d, "consume_skb" },
	{ 0x9688b47c, "dev_queue_xmit" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "759BE0AEA35A493F26E31B2");
MODULE_INFO(rhelversion, "8.0");

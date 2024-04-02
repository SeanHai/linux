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
	{ 0x88ab8522, "deregister_atm_ioctl" },
	{ 0xb6587688, "register_atm_ioctl" },
	{ 0x509f625d, "consume_skb" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x5def83f9, "skb_push" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x3ae61869, "vcc_process_recv_queue" },
	{ 0xdd2fa3f4, "__module_get" },
	{ 0x501a51d7, "ppp_register_channel" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x9a70d9ae, "ppp_channel_index" },
	{ 0x8e730c70, "ppp_unit_number" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6727c407, "ppp_output_wakeup" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x809d49fe, "ppp_input_error" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xccf1691f, "ppp_unregister_channel" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xf54365e9, "ppp_input" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=atm,ppp_generic";


MODULE_INFO(srcversion, "D0A0958A90B03B7F5E5EB12");
MODULE_INFO(rhelversion, "8.0");

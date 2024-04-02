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
	{ 0x8f699913, "capilib_release" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x349cba85, "strchr" },
	{ 0x49cc809c, "b1_load_t4file" },
	{ 0xb0ad34ee, "capilib_new_ncci" },
	{ 0xc41033c1, "seq_printf" },
	{ 0xbd178539, "capilib_release_appl" },
	{ 0xe6672d2b, "__dev_kfree_skb_any" },
	{ 0xada907a4, "capilib_free_ncci" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xfdedc137, "capi_ctr_handle_message" },
	{ 0x251056eb, "capi_ctr_down" },
	{ 0xf98beda4, "b1_parse_version" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe84ffd66, "capi_ctr_resume_output" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xc245ca28, "capi_ctr_ready" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf5eee0a4, "capilib_data_b3_req" },
	{ 0xe0046acc, "capi_ctr_suspend_output" },
	{ 0xea4805c2, "skb_queue_tail" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x8aa6d048, "b1_load_config" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x488a0ef1, "skb_dequeue" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0xcde1026b, "capilib_data_b3_conf" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1";


MODULE_INFO(srcversion, "E2FAE3D9288A91F51680267");
MODULE_INFO(rhelversion, "8.0");

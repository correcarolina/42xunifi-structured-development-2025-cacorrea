/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   food_order.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacorrea <cacorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 10:15:06 by cacorrea          #+#    #+#             */
/*   Updated: 2025/06/13 10:23:23 by cacorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FOOD_ORDER_H
# define FOOD_ORDER_H

#include <stdlib.h>
#include <stdbool.h>

struct OrderRequest;
struct OrderConfirmation;

int process_food_order(struct OrderRequest *request);
int check_restaurant_status(struct OrderRequest *request);
struct OrderConfirmation *create_standard_confirmation(void);
struct OrderConfirmation *create_preorder_confirmation(void);
void send_confirmation_notification(struct OrderConfirmation *confirmation);

#endif

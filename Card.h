#pragma once


#include <string>

/**
 * @brief Represents a single Flux Deck card.
 *
 * Each card contains a letter, a planet and a charge.
 */
class Card
{
private:
    char value;
    std::string suit;
    bool charge;

public:
    /**
     * @brief Constructs a card with the given attributes.
     *
     * @param cardValue Letter from A to E.
     * @param cardSuit Name of the planet.
     * @param cardCharge True for positive, false for negative.
     */
    Card(char cardValue, std::string cardSuit, bool cardCharge);

    /**
     * @brief Returns the card's letter.
     * @return The card value.
     */
    char getValue() const;

    /**
     * @brief Returns the card's planet.
     * @return The planet name.
     */
    std::string getSuit() const;

    /**
     * @brief Returns the card's charge.
     * @return True if positive, otherwise false.
     */
    bool getCharge() const;
};

